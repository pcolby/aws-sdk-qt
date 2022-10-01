// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTSRESPONSE_H
#define QTAWS_DESCRIBETRUSTSRESPONSE_H

#include "directoryserviceresponse.h"
#include "describetrustsrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeTrustsResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeTrustsResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DescribeTrustsResponse(const DescribeTrustsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTrustsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrustsResponse)
    Q_DISABLE_COPY(DescribeTrustsResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
