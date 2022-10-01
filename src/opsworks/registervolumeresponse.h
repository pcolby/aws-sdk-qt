// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERVOLUMERESPONSE_H
#define QTAWS_REGISTERVOLUMERESPONSE_H

#include "opsworksresponse.h"
#include "registervolumerequest.h"

namespace QtAws {
namespace OpsWorks {

class RegisterVolumeResponsePrivate;

class QTAWSOPSWORKS_EXPORT RegisterVolumeResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    RegisterVolumeResponse(const RegisterVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterVolumeResponse)
    Q_DISABLE_COPY(RegisterVolumeResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
