// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdataviewresponse.h"
#include "getdataviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetDataViewResponse
 * \brief The GetDataViewResponse class provides an interace for FinspaceData GetDataView responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getDataView
 */

/*!
 * Constructs a GetDataViewResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataViewResponse::GetDataViewResponse(
        const GetDataViewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new GetDataViewResponsePrivate(this), parent)
{
    setRequest(new GetDataViewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataViewRequest * GetDataViewResponse::request() const
{
    Q_D(const GetDataViewResponse);
    return static_cast<const GetDataViewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData GetDataView \a response.
 */
void GetDataViewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataViewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::GetDataViewResponsePrivate
 * \brief The GetDataViewResponsePrivate class provides private implementation for GetDataViewResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetDataViewResponsePrivate object with public implementation \a q.
 */
GetDataViewResponsePrivate::GetDataViewResponsePrivate(
    GetDataViewResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData GetDataView response element from \a xml.
 */
void GetDataViewResponsePrivate::parseGetDataViewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataViewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
