// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createchangesetresponse.h"
#include "createchangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::CreateChangesetResponse
 * \brief The CreateChangesetResponse class provides an interace for FinspaceData CreateChangeset responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::createChangeset
 */

/*!
 * Constructs a CreateChangesetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateChangesetResponse::CreateChangesetResponse(
        const CreateChangesetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new CreateChangesetResponsePrivate(this), parent)
{
    setRequest(new CreateChangesetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateChangesetRequest * CreateChangesetResponse::request() const
{
    Q_D(const CreateChangesetResponse);
    return static_cast<const CreateChangesetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData CreateChangeset \a response.
 */
void CreateChangesetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateChangesetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::CreateChangesetResponsePrivate
 * \brief The CreateChangesetResponsePrivate class provides private implementation for CreateChangesetResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a CreateChangesetResponsePrivate object with public implementation \a q.
 */
CreateChangesetResponsePrivate::CreateChangesetResponsePrivate(
    CreateChangesetResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData CreateChangeset response element from \a xml.
 */
void CreateChangesetResponsePrivate::parseCreateChangesetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateChangesetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
