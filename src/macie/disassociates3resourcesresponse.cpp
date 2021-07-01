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

#include "disassociates3resourcesresponse.h"
#include "disassociates3resourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::DisassociateS3ResourcesResponse
 * \brief The DisassociateS3ResourcesResponse class provides an interace for Macie DisassociateS3Resources responses.
 *
 * \inmodule QtAwsMacie
 *
 *  <fullname>Amazon Macie Classic</fullname>
 * 
 *  Amazon Macie Classic is a security service that uses machine learning to automatically discover, classify, and protect
 *  sensitive data in AWS. Macie Classic recognizes sensitive data such as personally identifiable information (PII) or
 *  intellectual property, and provides you with dashboards and alerts that give visibility into how this data is being
 *  accessed or moved. For more information, see the <a
 *  href="https://docs.aws.amazon.com/macie/latest/userguide/what-is-macie.html">Amazon Macie Classic User Guide</a>.
 *
 * \sa MacieClient::disassociateS3Resources
 */

/*!
 * Constructs a DisassociateS3ResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateS3ResourcesResponse::DisassociateS3ResourcesResponse(
        const DisassociateS3ResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MacieResponse(new DisassociateS3ResourcesResponsePrivate(this), parent)
{
    setRequest(new DisassociateS3ResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateS3ResourcesRequest * DisassociateS3ResourcesResponse::request() const
{
    Q_D(const DisassociateS3ResourcesResponse);
    return static_cast<const DisassociateS3ResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie DisassociateS3Resources \a response.
 */
void DisassociateS3ResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateS3ResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie::DisassociateS3ResourcesResponsePrivate
 * \brief The DisassociateS3ResourcesResponsePrivate class provides private implementation for DisassociateS3ResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a DisassociateS3ResourcesResponsePrivate object with public implementation \a q.
 */
DisassociateS3ResourcesResponsePrivate::DisassociateS3ResourcesResponsePrivate(
    DisassociateS3ResourcesResponse * const q) : MacieResponsePrivate(q)
{

}

/*!
 * Parses a Macie DisassociateS3Resources response element from \a xml.
 */
void DisassociateS3ResourcesResponsePrivate::parseDisassociateS3ResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateS3ResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie
} // namespace QtAws
