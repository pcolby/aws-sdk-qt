// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTSREQUEST_H
#define QTAWS_GETSNAPSHOTSREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class GetSnapshotsRequestPrivate;

class QTAWSKENDRA_EXPORT GetSnapshotsRequest : public KendraRequest {

public:
    GetSnapshotsRequest(const GetSnapshotsRequest &other);
    GetSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSnapshotsRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
