// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHVOCABULARIESREQUEST_H
#define QTAWS_SEARCHVOCABULARIESREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class SearchVocabulariesRequestPrivate;

class QTAWSCONNECT_EXPORT SearchVocabulariesRequest : public ConnectRequest {

public:
    SearchVocabulariesRequest(const SearchVocabulariesRequest &other);
    SearchVocabulariesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchVocabulariesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
