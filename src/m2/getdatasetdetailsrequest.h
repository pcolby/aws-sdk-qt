// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETDETAILSREQUEST_H
#define QTAWS_GETDATASETDETAILSREQUEST_H

#include "m2request.h"

namespace QtAws {
namespace M2 {

class GetDataSetDetailsRequestPrivate;

class QTAWSM2_EXPORT GetDataSetDetailsRequest : public M2Request {

public:
    GetDataSetDetailsRequest(const GetDataSetDetailsRequest &other);
    GetDataSetDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataSetDetailsRequest)

};

} // namespace M2
} // namespace QtAws

#endif
