// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPVERSIONRESPONSE_H
#define QTAWS_GETGROUPVERSIONRESPONSE_H

#include "greengrassresponse.h"
#include "getgroupversionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetGroupVersionResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetGroupVersionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetGroupVersionResponse(const GetGroupVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGroupVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupVersionResponse)
    Q_DISABLE_COPY(GetGroupVersionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
