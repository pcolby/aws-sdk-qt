// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerdomainresponse.h"
#include "registerdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::RegisterDomainResponse
 * \brief The RegisterDomainResponse class provides an interace for Swf RegisterDomain responses.
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
 * \sa SwfClient::registerDomain
 */

/*!
 * Constructs a RegisterDomainResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterDomainResponse::RegisterDomainResponse(
        const RegisterDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new RegisterDomainResponsePrivate(this), parent)
{
    setRequest(new RegisterDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterDomainRequest * RegisterDomainResponse::request() const
{
    Q_D(const RegisterDomainResponse);
    return static_cast<const RegisterDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf RegisterDomain \a response.
 */
void RegisterDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::RegisterDomainResponsePrivate
 * \brief The RegisterDomainResponsePrivate class provides private implementation for RegisterDomainResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a RegisterDomainResponsePrivate object with public implementation \a q.
 */
RegisterDomainResponsePrivate::RegisterDomainResponsePrivate(
    RegisterDomainResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf RegisterDomain response element from \a xml.
 */
void RegisterDomainResponsePrivate::parseRegisterDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
