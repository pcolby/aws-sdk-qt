// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDEFAULTVOCABULARYREQUEST_H
#define QTAWS_ASSOCIATEDEFAULTVOCABULARYREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class AssociateDefaultVocabularyRequestPrivate;

class QTAWSCONNECT_EXPORT AssociateDefaultVocabularyRequest : public ConnectRequest {

public:
    AssociateDefaultVocabularyRequest(const AssociateDefaultVocabularyRequest &other);
    AssociateDefaultVocabularyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDefaultVocabularyRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
