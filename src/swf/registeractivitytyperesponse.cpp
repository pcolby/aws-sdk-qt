/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "registeractivitytyperesponse.h"
#include "registeractivitytyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::RegisterActivityTypeResponse
 * \brief The RegisterActivityTypeResponse class provides an interace for SWF RegisterActivityType responses.
 *
 * \inmodule QtAwsSWF
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
 *  href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SWFClient::registerActivityType
 */

/*!
 * Constructs a RegisterActivityTypeResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterActivityTypeResponse::RegisterActivityTypeResponse(
        const RegisterActivityTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new RegisterActivityTypeResponsePrivate(this), parent)
{
    setRequest(new RegisterActivityTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterActivityTypeRequest * RegisterActivityTypeResponse::request() const
{
    Q_D(const RegisterActivityTypeResponse);
    return static_cast<const RegisterActivityTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SWF RegisterActivityType \a response.
 */
void RegisterActivityTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(RegisterActivityTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SWF::RegisterActivityTypeResponsePrivate
 * \brief The RegisterActivityTypeResponsePrivate class provides private implementation for RegisterActivityTypeResponse.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a RegisterActivityTypeResponsePrivate object with public implementation \a q.
 */
RegisterActivityTypeResponsePrivate::RegisterActivityTypeResponsePrivate(
    RegisterActivityTypeResponse * const q) : SWFResponsePrivate(q)
{

}

/*!
 * Parses a SWF RegisterActivityType response element from \a xml.
 */
void RegisterActivityTypeResponsePrivate::parseRegisterActivityTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterActivityTypeResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
