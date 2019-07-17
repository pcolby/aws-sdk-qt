/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SQSSENDMESSAGEBATCHREQUEST_H
#define SQSSENDMESSAGEBATCHREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsSendMessageBatchRequestPrivate;

class QTAWS_EXPORT SqsSendMessageBatchRequest : public SqsRequest {

public:
  //SqsSendMessageBatchRequest(...); ///< @todo
    SqsSendMessageBatchRequest(const SqsSendMessageBatchRequest &other);
    SqsSendMessageBatchRequest();

    virtual bool isValid() const;

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsSendMessageBatchRequest)
    friend class TestSqsSendMessageBatchRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif
