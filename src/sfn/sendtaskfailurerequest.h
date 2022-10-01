// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTASKFAILUREREQUEST_H
#define QTAWS_SENDTASKFAILUREREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class SendTaskFailureRequestPrivate;

class QTAWSSFN_EXPORT SendTaskFailureRequest : public SfnRequest {

public:
    SendTaskFailureRequest(const SendTaskFailureRequest &other);
    SendTaskFailureRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendTaskFailureRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
