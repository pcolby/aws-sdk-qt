// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSSENDMESSAGEREQUEST_H
#define SQSSENDMESSAGEREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsSendMessageRequestPrivate;

class QTAWS_EXPORT SqsSendMessageRequest : public SqsRequest {

public:
  //SqsSendMessageRequest(...); ///< @todo
    SqsSendMessageRequest(const SqsSendMessageRequest &other);
    SqsSendMessageRequest();

    virtual bool isValid() const;

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsSendMessageRequest)
    friend class TestSqsSendMessageRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif
