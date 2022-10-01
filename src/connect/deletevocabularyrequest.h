// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOCABULARYREQUEST_H
#define QTAWS_DELETEVOCABULARYREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DeleteVocabularyRequestPrivate;

class QTAWSCONNECT_EXPORT DeleteVocabularyRequest : public ConnectRequest {

public:
    DeleteVocabularyRequest(const DeleteVocabularyRequest &other);
    DeleteVocabularyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVocabularyRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
