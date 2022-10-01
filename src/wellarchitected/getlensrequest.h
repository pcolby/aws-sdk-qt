// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLENSREQUEST_H
#define QTAWS_GETLENSREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class GetLensRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT GetLensRequest : public WellArchitectedRequest {

public:
    GetLensRequest(const GetLensRequest &other);
    GetLensRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLensRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
