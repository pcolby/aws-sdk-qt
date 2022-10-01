// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtablestorageoptimizersresponse.h"
#include "listtablestorageoptimizersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListTableStorageOptimizersResponse
 * \brief The ListTableStorageOptimizersResponse class provides an interace for LakeFormation ListTableStorageOptimizers responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::listTableStorageOptimizers
 */

/*!
 * Constructs a ListTableStorageOptimizersResponse object for \a reply to \a request, with parent \a parent.
 */
ListTableStorageOptimizersResponse::ListTableStorageOptimizersResponse(
        const ListTableStorageOptimizersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new ListTableStorageOptimizersResponsePrivate(this), parent)
{
    setRequest(new ListTableStorageOptimizersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTableStorageOptimizersRequest * ListTableStorageOptimizersResponse::request() const
{
    Q_D(const ListTableStorageOptimizersResponse);
    return static_cast<const ListTableStorageOptimizersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation ListTableStorageOptimizers \a response.
 */
void ListTableStorageOptimizersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTableStorageOptimizersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::ListTableStorageOptimizersResponsePrivate
 * \brief The ListTableStorageOptimizersResponsePrivate class provides private implementation for ListTableStorageOptimizersResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListTableStorageOptimizersResponsePrivate object with public implementation \a q.
 */
ListTableStorageOptimizersResponsePrivate::ListTableStorageOptimizersResponsePrivate(
    ListTableStorageOptimizersResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation ListTableStorageOptimizers response element from \a xml.
 */
void ListTableStorageOptimizersResponsePrivate::parseListTableStorageOptimizersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTableStorageOptimizersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
