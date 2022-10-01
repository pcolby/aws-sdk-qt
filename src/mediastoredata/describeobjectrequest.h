// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOBJECTREQUEST_H
#define QTAWS_DESCRIBEOBJECTREQUEST_H

#include "mediastoredatarequest.h"

namespace QtAws {
namespace MediaStoreData {

class DescribeObjectRequestPrivate;

class QTAWSMEDIASTOREDATA_EXPORT DescribeObjectRequest : public MediaStoreDataRequest {

public:
    DescribeObjectRequest(const DescribeObjectRequest &other);
    DescribeObjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeObjectRequest)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
