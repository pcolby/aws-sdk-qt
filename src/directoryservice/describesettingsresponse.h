// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESETTINGSRESPONSE_H
#define QTAWS_DESCRIBESETTINGSRESPONSE_H

#include "directoryserviceresponse.h"
#include "describesettingsrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeSettingsResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeSettingsResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DescribeSettingsResponse(const DescribeSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSettingsResponse)
    Q_DISABLE_COPY(DescribeSettingsResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
