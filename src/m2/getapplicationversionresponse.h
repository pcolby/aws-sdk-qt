// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONVERSIONRESPONSE_H
#define QTAWS_GETAPPLICATIONVERSIONRESPONSE_H

#include "m2response.h"
#include "getapplicationversionrequest.h"

namespace QtAws {
namespace M2 {

class GetApplicationVersionResponsePrivate;

class QTAWSM2_EXPORT GetApplicationVersionResponse : public M2Response {
    Q_OBJECT

public:
    GetApplicationVersionResponse(const GetApplicationVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApplicationVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationVersionResponse)
    Q_DISABLE_COPY(GetApplicationVersionResponse)

};

} // namespace M2
} // namespace QtAws

#endif
