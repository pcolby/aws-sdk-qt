// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvolumeresponse.h"
#include "createvolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateVolumeResponse
 * \brief The CreateVolumeResponse class provides an interace for FSx CreateVolume responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createVolume
 */

/*!
 * Constructs a CreateVolumeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVolumeResponse::CreateVolumeResponse(
        const CreateVolumeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new CreateVolumeResponsePrivate(this), parent)
{
    setRequest(new CreateVolumeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVolumeRequest * CreateVolumeResponse::request() const
{
    Q_D(const CreateVolumeResponse);
    return static_cast<const CreateVolumeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx CreateVolume \a response.
 */
void CreateVolumeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVolumeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::CreateVolumeResponsePrivate
 * \brief The CreateVolumeResponsePrivate class provides private implementation for CreateVolumeResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateVolumeResponsePrivate object with public implementation \a q.
 */
CreateVolumeResponsePrivate::CreateVolumeResponsePrivate(
    CreateVolumeResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx CreateVolume response element from \a xml.
 */
void CreateVolumeResponsePrivate::parseCreateVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVolumeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
