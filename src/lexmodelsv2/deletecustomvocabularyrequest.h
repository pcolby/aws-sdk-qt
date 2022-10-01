// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMVOCABULARYREQUEST_H
#define QTAWS_DELETECUSTOMVOCABULARYREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteCustomVocabularyRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteCustomVocabularyRequest : public LexModelsV2Request {

public:
    DeleteCustomVocabularyRequest(const DeleteCustomVocabularyRequest &other);
    DeleteCustomVocabularyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomVocabularyRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
