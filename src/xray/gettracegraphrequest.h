// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRACEGRAPHREQUEST_H
#define QTAWS_GETTRACEGRAPHREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class GetTraceGraphRequestPrivate;

class QTAWSXRAY_EXPORT GetTraceGraphRequest : public XRayRequest {

public:
    GetTraceGraphRequest(const GetTraceGraphRequest &other);
    GetTraceGraphRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTraceGraphRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
