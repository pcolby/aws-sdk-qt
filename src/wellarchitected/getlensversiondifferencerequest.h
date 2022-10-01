// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLENSVERSIONDIFFERENCEREQUEST_H
#define QTAWS_GETLENSVERSIONDIFFERENCEREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class GetLensVersionDifferenceRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT GetLensVersionDifferenceRequest : public WellArchitectedRequest {

public:
    GetLensVersionDifferenceRequest(const GetLensVersionDifferenceRequest &other);
    GetLensVersionDifferenceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLensVersionDifferenceRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
