// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANALYSISSCHEMERESPONSE_H
#define QTAWS_DELETEANALYSISSCHEMERESPONSE_H

#include "cloudsearchresponse.h"
#include "deleteanalysisschemerequest.h"

namespace QtAws {
namespace CloudSearch {

class DeleteAnalysisSchemeResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT DeleteAnalysisSchemeResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    DeleteAnalysisSchemeResponse(const DeleteAnalysisSchemeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAnalysisSchemeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAnalysisSchemeResponse)
    Q_DISABLE_COPY(DeleteAnalysisSchemeResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
