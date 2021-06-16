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

#include "cancelimagecreationresponse.h"
#include "cancelimagecreationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::CancelImageCreationResponse
 * \brief The CancelImageCreationResponse class provides an interace for imagebuilder CancelImageCreation responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::cancelImageCreation
 */

/*!
 * Constructs a CancelImageCreationResponse object for \a reply to \a request, with parent \a parent.
 */
CancelImageCreationResponse::CancelImageCreationResponse(
        const CancelImageCreationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new CancelImageCreationResponsePrivate(this), parent)
{
    setRequest(new CancelImageCreationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelImageCreationRequest * CancelImageCreationResponse::request() const
{
    Q_D(const CancelImageCreationResponse);
    return static_cast<const CancelImageCreationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful imagebuilder CancelImageCreation \a response.
 */
void CancelImageCreationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelImageCreationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::CancelImageCreationResponsePrivate
 * \brief The CancelImageCreationResponsePrivate class provides private implementation for CancelImageCreationResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a CancelImageCreationResponsePrivate object with public implementation \a q.
 */
CancelImageCreationResponsePrivate::CancelImageCreationResponsePrivate(
    CancelImageCreationResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder CancelImageCreation response element from \a xml.
 */
void CancelImageCreationResponsePrivate::parseCancelImageCreationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelImageCreationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
