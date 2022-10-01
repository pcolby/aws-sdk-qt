// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTVERSIONRESPONSE_H
#define QTAWS_DELETEPROJECTVERSIONRESPONSE_H

#include "rekognitionresponse.h"
#include "deleteprojectversionrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteProjectVersionResponsePrivate;

class QTAWSREKOGNITION_EXPORT DeleteProjectVersionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DeleteProjectVersionResponse(const DeleteProjectVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProjectVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProjectVersionResponse)
    Q_DISABLE_COPY(DeleteProjectVersionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
