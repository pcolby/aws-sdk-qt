// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deprecatedomainresponse.h"
#include "deprecatedomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::DeprecateDomainResponse
 * \brief The DeprecateDomainResponse class provides an interace for Swf DeprecateDomain responses.
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
 * \sa SwfClient::deprecateDomain
 */

/*!
 * Constructs a DeprecateDomainResponse object for \a reply to \a request, with parent \a parent.
 */
DeprecateDomainResponse::DeprecateDomainResponse(
        const DeprecateDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new DeprecateDomainResponsePrivate(this), parent)
{
    setRequest(new DeprecateDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeprecateDomainRequest * DeprecateDomainResponse::request() const
{
    Q_D(const DeprecateDomainResponse);
    return static_cast<const DeprecateDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf DeprecateDomain \a response.
 */
void DeprecateDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeprecateDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::DeprecateDomainResponsePrivate
 * \brief The DeprecateDomainResponsePrivate class provides private implementation for DeprecateDomainResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a DeprecateDomainResponsePrivate object with public implementation \a q.
 */
DeprecateDomainResponsePrivate::DeprecateDomainResponsePrivate(
    DeprecateDomainResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf DeprecateDomain response element from \a xml.
 */
void DeprecateDomainResponsePrivate::parseDeprecateDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeprecateDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
