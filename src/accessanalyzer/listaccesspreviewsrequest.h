// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPREVIEWSREQUEST_H
#define QTAWS_LISTACCESSPREVIEWSREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListAccessPreviewsRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT ListAccessPreviewsRequest : public AccessAnalyzerRequest {

public:
    ListAccessPreviewsRequest(const ListAccessPreviewsRequest &other);
    ListAccessPreviewsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccessPreviewsRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
