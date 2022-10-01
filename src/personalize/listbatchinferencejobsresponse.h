// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBATCHINFERENCEJOBSRESPONSE_H
#define QTAWS_LISTBATCHINFERENCEJOBSRESPONSE_H

#include "personalizeresponse.h"
#include "listbatchinferencejobsrequest.h"

namespace QtAws {
namespace Personalize {

class ListBatchInferenceJobsResponsePrivate;

class QTAWSPERSONALIZE_EXPORT ListBatchInferenceJobsResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    ListBatchInferenceJobsResponse(const ListBatchInferenceJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBatchInferenceJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBatchInferenceJobsResponse)
    Q_DISABLE_COPY(ListBatchInferenceJobsResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
