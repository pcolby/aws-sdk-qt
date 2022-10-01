// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestoragelensconfigurationresponse.h"
#include "deletestoragelensconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteStorageLensConfigurationResponse
 * \brief The DeleteStorageLensConfigurationResponse class provides an interace for S3Control DeleteStorageLensConfiguration responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteStorageLensConfiguration
 */

/*!
 * Constructs a DeleteStorageLensConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStorageLensConfigurationResponse::DeleteStorageLensConfigurationResponse(
        const DeleteStorageLensConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DeleteStorageLensConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteStorageLensConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStorageLensConfigurationRequest * DeleteStorageLensConfigurationResponse::request() const
{
    Q_D(const DeleteStorageLensConfigurationResponse);
    return static_cast<const DeleteStorageLensConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DeleteStorageLensConfiguration \a response.
 */
void DeleteStorageLensConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStorageLensConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DeleteStorageLensConfigurationResponsePrivate
 * \brief The DeleteStorageLensConfigurationResponsePrivate class provides private implementation for DeleteStorageLensConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteStorageLensConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteStorageLensConfigurationResponsePrivate::DeleteStorageLensConfigurationResponsePrivate(
    DeleteStorageLensConfigurationResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DeleteStorageLensConfiguration response element from \a xml.
 */
void DeleteStorageLensConfigurationResponsePrivate::parseDeleteStorageLensConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStorageLensConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
