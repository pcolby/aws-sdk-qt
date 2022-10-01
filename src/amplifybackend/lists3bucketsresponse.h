// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTS3BUCKETSRESPONSE_H
#define QTAWS_LISTS3BUCKETSRESPONSE_H

#include "amplifybackendresponse.h"
#include "lists3bucketsrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class ListS3BucketsResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT ListS3BucketsResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    ListS3BucketsResponse(const ListS3BucketsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListS3BucketsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListS3BucketsResponse)
    Q_DISABLE_COPY(ListS3BucketsResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
