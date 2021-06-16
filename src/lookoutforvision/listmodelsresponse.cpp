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

#include "listmodelsresponse.h"
#include "listmodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutforVision {

/*!
 * \class QtAws::LookoutforVision::ListModelsResponse
 * \brief The ListModelsResponse class provides an interace for LookoutforVision ListModels responses.
 *
 * \inmodule QtAwsLookoutforVision
 *
 *  This is the Amazon Lookout for Vision API Reference. It provides descriptions of actions, data types, common parameters,
 *  and common
 * 
 *  errors>
 * 
 *  Amazon Lookout for Vision enables you to find visual defects in industrial products, accurately and at scale. It uses
 *  computer vision to identify missing components in an industrial product, damage to vehicles or structures,
 *  irregularities in production lines, and even minuscule defects in silicon wafers — or any other physical item where
 *  quality is important such as a missing capacitor on printed circuit
 *
 * \sa LookoutforVisionClient::listModels
 */

/*!
 * Constructs a ListModelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListModelsResponse::ListModelsResponse(
        const ListModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutforVisionResponse(new ListModelsResponsePrivate(this), parent)
{
    setRequest(new ListModelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListModelsRequest * ListModelsResponse::request() const
{
    Q_D(const ListModelsResponse);
    return static_cast<const ListModelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutforVision ListModels \a response.
 */
void ListModelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutforVision::ListModelsResponsePrivate
 * \brief The ListModelsResponsePrivate class provides private implementation for ListModelsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutforVision
 */

/*!
 * Constructs a ListModelsResponsePrivate object with public implementation \a q.
 */
ListModelsResponsePrivate::ListModelsResponsePrivate(
    ListModelsResponse * const q) : LookoutforVisionResponsePrivate(q)
{

}

/*!
 * Parses a LookoutforVision ListModels response element from \a xml.
 */
void ListModelsResponsePrivate::parseListModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListModelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutforVision
} // namespace QtAws
