// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTASKSUCCESSREQUEST_H
#define QTAWS_SENDTASKSUCCESSREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class SendTaskSuccessRequestPrivate;

class QTAWSSFN_EXPORT SendTaskSuccessRequest : public SfnRequest {

public:
    SendTaskSuccessRequest(const SendTaskSuccessRequest &other);
    SendTaskSuccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendTaskSuccessRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
