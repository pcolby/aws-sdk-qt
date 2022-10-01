// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOCABULARYREQUEST_H
#define QTAWS_CREATEVOCABULARYREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class CreateVocabularyRequestPrivate;

class QTAWSCONNECT_EXPORT CreateVocabularyRequest : public ConnectRequest {

public:
    CreateVocabularyRequest(const CreateVocabularyRequest &other);
    CreateVocabularyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVocabularyRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
