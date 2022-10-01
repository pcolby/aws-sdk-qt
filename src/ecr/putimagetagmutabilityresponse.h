// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGETAGMUTABILITYRESPONSE_H
#define QTAWS_PUTIMAGETAGMUTABILITYRESPONSE_H

#include "ecrresponse.h"
#include "putimagetagmutabilityrequest.h"

namespace QtAws {
namespace Ecr {

class PutImageTagMutabilityResponsePrivate;

class QTAWSECR_EXPORT PutImageTagMutabilityResponse : public EcrResponse {
    Q_OBJECT

public:
    PutImageTagMutabilityResponse(const PutImageTagMutabilityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutImageTagMutabilityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutImageTagMutabilityResponse)
    Q_DISABLE_COPY(PutImageTagMutabilityResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
