// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECANARYRESPONSE_H
#define QTAWS_CREATECANARYRESPONSE_H

#include "syntheticsresponse.h"
#include "createcanaryrequest.h"

namespace QtAws {
namespace Synthetics {

class CreateCanaryResponsePrivate;

class QTAWSSYNTHETICS_EXPORT CreateCanaryResponse : public SyntheticsResponse {
    Q_OBJECT

public:
    CreateCanaryResponse(const CreateCanaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCanaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCanaryResponse)
    Q_DISABLE_COPY(CreateCanaryResponse)

};

} // namespace Synthetics
} // namespace QtAws

#endif
