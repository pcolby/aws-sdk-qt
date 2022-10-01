// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUITERESPONSE_H
#define QTAWS_GETSUITERESPONSE_H

#include "devicefarmresponse.h"
#include "getsuiterequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetSuiteResponsePrivate;

class QTAWSDEVICEFARM_EXPORT GetSuiteResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    GetSuiteResponse(const GetSuiteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSuiteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSuiteResponse)
    Q_DISABLE_COPY(GetSuiteResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
