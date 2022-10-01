// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbuiltinslottypesresponse.h"
#include "listbuiltinslottypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::ListBuiltInSlotTypesResponse
 * \brief The ListBuiltInSlotTypesResponse class provides an interace for LexModelsV2 ListBuiltInSlotTypes responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::listBuiltInSlotTypes
 */

/*!
 * Constructs a ListBuiltInSlotTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListBuiltInSlotTypesResponse::ListBuiltInSlotTypesResponse(
        const ListBuiltInSlotTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new ListBuiltInSlotTypesResponsePrivate(this), parent)
{
    setRequest(new ListBuiltInSlotTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBuiltInSlotTypesRequest * ListBuiltInSlotTypesResponse::request() const
{
    Q_D(const ListBuiltInSlotTypesResponse);
    return static_cast<const ListBuiltInSlotTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 ListBuiltInSlotTypes \a response.
 */
void ListBuiltInSlotTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBuiltInSlotTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::ListBuiltInSlotTypesResponsePrivate
 * \brief The ListBuiltInSlotTypesResponsePrivate class provides private implementation for ListBuiltInSlotTypesResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a ListBuiltInSlotTypesResponsePrivate object with public implementation \a q.
 */
ListBuiltInSlotTypesResponsePrivate::ListBuiltInSlotTypesResponsePrivate(
    ListBuiltInSlotTypesResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 ListBuiltInSlotTypes response element from \a xml.
 */
void ListBuiltInSlotTypesResponsePrivate::parseListBuiltInSlotTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBuiltInSlotTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
