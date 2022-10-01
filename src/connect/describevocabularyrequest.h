// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOCABULARYREQUEST_H
#define QTAWS_DESCRIBEVOCABULARYREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DescribeVocabularyRequestPrivate;

class QTAWSCONNECT_EXPORT DescribeVocabularyRequest : public ConnectRequest {

public:
    DescribeVocabularyRequest(const DescribeVocabularyRequest &other);
    DescribeVocabularyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVocabularyRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
