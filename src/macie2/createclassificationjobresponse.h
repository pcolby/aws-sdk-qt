// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLASSIFICATIONJOBRESPONSE_H
#define QTAWS_CREATECLASSIFICATIONJOBRESPONSE_H

#include "macie2response.h"
#include "createclassificationjobrequest.h"

namespace QtAws {
namespace Macie2 {

class CreateClassificationJobResponsePrivate;

class QTAWSMACIE2_EXPORT CreateClassificationJobResponse : public Macie2Response {
    Q_OBJECT

public:
    CreateClassificationJobResponse(const CreateClassificationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateClassificationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClassificationJobResponse)
    Q_DISABLE_COPY(CreateClassificationJobResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
