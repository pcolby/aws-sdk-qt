// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdataviewresponse.h"
#include "createdataviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::CreateDataViewResponse
 * \brief The CreateDataViewResponse class provides an interace for FinspaceData CreateDataView responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::createDataView
 */

/*!
 * Constructs a CreateDataViewResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDataViewResponse::CreateDataViewResponse(
        const CreateDataViewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new CreateDataViewResponsePrivate(this), parent)
{
    setRequest(new CreateDataViewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDataViewRequest * CreateDataViewResponse::request() const
{
    Q_D(const CreateDataViewResponse);
    return static_cast<const CreateDataViewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData CreateDataView \a response.
 */
void CreateDataViewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDataViewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::CreateDataViewResponsePrivate
 * \brief The CreateDataViewResponsePrivate class provides private implementation for CreateDataViewResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a CreateDataViewResponsePrivate object with public implementation \a q.
 */
CreateDataViewResponsePrivate::CreateDataViewResponsePrivate(
    CreateDataViewResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData CreateDataView response element from \a xml.
 */
void CreateDataViewResponsePrivate::parseCreateDataViewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataViewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
