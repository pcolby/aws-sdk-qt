// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBOUTPUTREQUEST_H
#define QTAWS_GETJOBOUTPUTREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class GetJobOutputRequestPrivate;

class QTAWSGLACIER_EXPORT GetJobOutputRequest : public GlacierRequest {

public:
    GetJobOutputRequest(const GetJobOutputRequest &other);
    GetJobOutputRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobOutputRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
