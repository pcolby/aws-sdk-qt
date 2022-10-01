// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECANARYRESPONSE_H
#define QTAWS_UPDATECANARYRESPONSE_H

#include "syntheticsresponse.h"
#include "updatecanaryrequest.h"

namespace QtAws {
namespace Synthetics {

class UpdateCanaryResponsePrivate;

class QTAWSSYNTHETICS_EXPORT UpdateCanaryResponse : public SyntheticsResponse {
    Q_OBJECT

public:
    UpdateCanaryResponse(const UpdateCanaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCanaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCanaryResponse)
    Q_DISABLE_COPY(UpdateCanaryResponse)

};

} // namespace Synthetics
} // namespace QtAws

#endif
