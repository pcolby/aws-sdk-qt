// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRIMARYREGIONRESPONSE_H
#define QTAWS_UPDATEPRIMARYREGIONRESPONSE_H

#include "kmsresponse.h"
#include "updateprimaryregionrequest.h"

namespace QtAws {
namespace Kms {

class UpdatePrimaryRegionResponsePrivate;

class QTAWSKMS_EXPORT UpdatePrimaryRegionResponse : public KmsResponse {
    Q_OBJECT

public:
    UpdatePrimaryRegionResponse(const UpdatePrimaryRegionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePrimaryRegionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePrimaryRegionResponse)
    Q_DISABLE_COPY(UpdatePrimaryRegionResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
