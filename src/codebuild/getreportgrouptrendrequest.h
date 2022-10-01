// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPORTGROUPTRENDREQUEST_H
#define QTAWS_GETREPORTGROUPTRENDREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class GetReportGroupTrendRequestPrivate;

class QTAWSCODEBUILD_EXPORT GetReportGroupTrendRequest : public CodeBuildRequest {

public:
    GetReportGroupTrendRequest(const GetReportGroupTrendRequest &other);
    GetReportGroupTrendRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReportGroupTrendRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
