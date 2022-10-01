// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLASSIFICATIONJOBRESPONSE_H
#define QTAWS_UPDATECLASSIFICATIONJOBRESPONSE_H

#include "macie2response.h"
#include "updateclassificationjobrequest.h"

namespace QtAws {
namespace Macie2 {

class UpdateClassificationJobResponsePrivate;

class QTAWSMACIE2_EXPORT UpdateClassificationJobResponse : public Macie2Response {
    Q_OBJECT

public:
    UpdateClassificationJobResponse(const UpdateClassificationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateClassificationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClassificationJobResponse)
    Q_DISABLE_COPY(UpdateClassificationJobResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
