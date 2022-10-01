// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putstoragelensconfigurationresponse.h"
#include "putstoragelensconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutStorageLensConfigurationResponse
 * \brief The PutStorageLensConfigurationResponse class provides an interace for S3Control PutStorageLensConfiguration responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putStorageLensConfiguration
 */

/*!
 * Constructs a PutStorageLensConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutStorageLensConfigurationResponse::PutStorageLensConfigurationResponse(
        const PutStorageLensConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutStorageLensConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutStorageLensConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutStorageLensConfigurationRequest * PutStorageLensConfigurationResponse::request() const
{
    Q_D(const PutStorageLensConfigurationResponse);
    return static_cast<const PutStorageLensConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control PutStorageLensConfiguration \a response.
 */
void PutStorageLensConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutStorageLensConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutStorageLensConfigurationResponsePrivate
 * \brief The PutStorageLensConfigurationResponsePrivate class provides private implementation for PutStorageLensConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutStorageLensConfigurationResponsePrivate object with public implementation \a q.
 */
PutStorageLensConfigurationResponsePrivate::PutStorageLensConfigurationResponsePrivate(
    PutStorageLensConfigurationResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutStorageLensConfiguration response element from \a xml.
 */
void PutStorageLensConfigurationResponsePrivate::parsePutStorageLensConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutStorageLensConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
