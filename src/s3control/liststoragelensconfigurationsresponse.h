// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTORAGELENSCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTSTORAGELENSCONFIGURATIONSRESPONSE_H

#include "s3controlresponse.h"
#include "liststoragelensconfigurationsrequest.h"

namespace QtAws {
namespace S3Control {

class ListStorageLensConfigurationsResponsePrivate;

class QTAWSS3CONTROL_EXPORT ListStorageLensConfigurationsResponse : public S3ControlResponse {
    Q_OBJECT

public:
    ListStorageLensConfigurationsResponse(const ListStorageLensConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStorageLensConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStorageLensConfigurationsResponse)
    Q_DISABLE_COPY(ListStorageLensConfigurationsResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
