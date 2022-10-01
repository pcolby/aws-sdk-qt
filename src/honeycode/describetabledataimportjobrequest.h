// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLEDATAIMPORTJOBREQUEST_H
#define QTAWS_DESCRIBETABLEDATAIMPORTJOBREQUEST_H

#include "honeycoderequest.h"

namespace QtAws {
namespace Honeycode {

class DescribeTableDataImportJobRequestPrivate;

class QTAWSHONEYCODE_EXPORT DescribeTableDataImportJobRequest : public HoneycodeRequest {

public:
    DescribeTableDataImportJobRequest(const DescribeTableDataImportJobRequest &other);
    DescribeTableDataImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTableDataImportJobRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
