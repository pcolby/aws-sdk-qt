// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdomainsresponse.h"
#include "listdomainsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::ListDomainsResponse
 * \brief The ListDomainsResponse class provides an interace for Swf ListDomains responses.
 *
 * \inmodule QtAwsSwf
 *
 *  <fullname>Amazon Simple Workflow Service</fullname>
 * 
 *  The Amazon Simple Workflow Service (Amazon SWF) makes it easy to build applications that use Amazon's cloud to
 *  coordinate work across distributed components. In Amazon SWF, a <i>task</i> represents a logical unit of work that is
 *  performed by a component of your workflow. Coordinating tasks in a workflow involves managing intertask dependencies,
 *  scheduling, and concurrency in accordance with the logical flow of the
 * 
 *  application>
 * 
 *  Amazon SWF gives you full control over implementing tasks and coordinating them without worrying about underlying
 *  complexities such as tracking their progress and maintaining their
 * 
 *  state>
 * 
 *  This documentation serves as reference only. For a broader overview of the Amazon SWF programming model, see the <i> <a
 *  href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SwfClient::listDomains
 */

/*!
 * Constructs a ListDomainsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDomainsResponse::ListDomainsResponse(
        const ListDomainsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new ListDomainsResponsePrivate(this), parent)
{
    setRequest(new ListDomainsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDomainsRequest * ListDomainsResponse::request() const
{
    Q_D(const ListDomainsResponse);
    return static_cast<const ListDomainsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf ListDomains \a response.
 */
void ListDomainsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDomainsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::ListDomainsResponsePrivate
 * \brief The ListDomainsResponsePrivate class provides private implementation for ListDomainsResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a ListDomainsResponsePrivate object with public implementation \a q.
 */
ListDomainsResponsePrivate::ListDomainsResponsePrivate(
    ListDomainsResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf ListDomains response element from \a xml.
 */
void ListDomainsResponsePrivate::parseListDomainsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDomainsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
