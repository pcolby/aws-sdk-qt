// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSESSIONREQUEST_H
#define QTAWS_PUTSESSIONREQUEST_H

#include "lexruntimev2request.h"

namespace QtAws {
namespace LexRuntimeV2 {

class PutSessionRequestPrivate;

class QTAWSLEXRUNTIMEV2_EXPORT PutSessionRequest : public LexRuntimeV2Request {

public:
    PutSessionRequest(const PutSessionRequest &other);
    PutSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSessionRequest)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
