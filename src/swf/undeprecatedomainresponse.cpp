// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "undeprecatedomainresponse.h"
#include "undeprecatedomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::UndeprecateDomainResponse
 * \brief The UndeprecateDomainResponse class provides an interace for Swf UndeprecateDomain responses.
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
 * \sa SwfClient::undeprecateDomain
 */

/*!
 * Constructs a UndeprecateDomainResponse object for \a reply to \a request, with parent \a parent.
 */
UndeprecateDomainResponse::UndeprecateDomainResponse(
        const UndeprecateDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new UndeprecateDomainResponsePrivate(this), parent)
{
    setRequest(new UndeprecateDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UndeprecateDomainRequest * UndeprecateDomainResponse::request() const
{
    Q_D(const UndeprecateDomainResponse);
    return static_cast<const UndeprecateDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf UndeprecateDomain \a response.
 */
void UndeprecateDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UndeprecateDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::UndeprecateDomainResponsePrivate
 * \brief The UndeprecateDomainResponsePrivate class provides private implementation for UndeprecateDomainResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a UndeprecateDomainResponsePrivate object with public implementation \a q.
 */
UndeprecateDomainResponsePrivate::UndeprecateDomainResponsePrivate(
    UndeprecateDomainResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf UndeprecateDomain response element from \a xml.
 */
void UndeprecateDomainResponsePrivate::parseUndeprecateDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UndeprecateDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
