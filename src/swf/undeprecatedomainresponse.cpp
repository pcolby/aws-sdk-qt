/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "undeprecatedomainresponse.h"
#include "undeprecatedomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::UndeprecateDomainResponse
 * \brief The UndeprecateDomainResponse class provides an interace for SWF UndeprecateDomain responses.
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
    return static_cast<const UndeprecateDomainRequest *>(SwfResponse::request());
}

/*!
 * \reimp
 * Parses a successful SWF UndeprecateDomain \a response.
 */
void UndeprecateDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UndeprecateDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SWF::UndeprecateDomainResponsePrivate
 * \brief The UndeprecateDomainResponsePrivate class provides private implementation for UndeprecateDomainResponse.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a UndeprecateDomainResponsePrivate object with public implementation \a q.
 */
UndeprecateDomainResponsePrivate::UndeprecateDomainResponsePrivate(
    UndeprecateDomainResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a SWF UndeprecateDomain response element from \a xml.
 */
void UndeprecateDomainResponsePrivate::parseUndeprecateDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UndeprecateDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SWF
} // namespace QtAws
