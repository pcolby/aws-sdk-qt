// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERHISTORYREQUEST_H
#define QTAWS_GETPARAMETERHISTORYREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetParameterHistoryRequestPrivate;

class QTAWSSSM_EXPORT GetParameterHistoryRequest : public SsmRequest {

public:
    GetParameterHistoryRequest(const GetParameterHistoryRequest &other);
    GetParameterHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetParameterHistoryRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
