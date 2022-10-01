// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPSSUMMARYREQUEST_H
#define QTAWS_GETOPSSUMMARYREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetOpsSummaryRequestPrivate;

class QTAWSSSM_EXPORT GetOpsSummaryRequest : public SsmRequest {

public:
    GetOpsSummaryRequest(const GetOpsSummaryRequest &other);
    GetOpsSummaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOpsSummaryRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
